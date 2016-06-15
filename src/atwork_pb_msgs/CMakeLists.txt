cmake_minimum_required(VERSION 2.8.7)
project(atwork_pb_msgs)
find_package(catkin REQUIRED)
find_package(Protobuf REQUIRED)

include_directories(${PROTOBUF_INCLUDE_DIRS})

catkin_package(
  INCLUDE_DIRS
    ${PROTOBUF_INCLUDE_DIRS}
  LIBRARIES
    atwork_pb_msgs
)

set(ATWORK_PROTOS
  AttentionMessage.proto
  BeaconSignal.proto
  BenchmarkControl.proto
  BenchmarkInfo.proto
  BenchmarkState.proto
  ConveyorBelt.proto
  Inventory.proto
  LoggingStatus.proto
  NavigationTask.proto
  RobotInfo.proto
  RobotStatusReport.proto
  TaskInfo.proto
  Time.proto
  TransportationTask.proto
  VersionInfo.proto  
)

protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS ${ATWORK_PROTOS})

add_custom_target(${PROJECT_NAME}_generate_headers
  DEPENDS ${PROTO_HDRS}
)

add_library(atwork_pb_msgs ${PROTO_SRCS})
target_link_libraries(atwork_pb_msgs ${PROTOBUF_LIBRARIES})
add_dependencies(atwork_pb_msgs ${PROJECT_NAME}_generate_headers)

file(MAKE_DIRECTORY ${CATKIN_DEVEL_PREFIX}/${CATKIN_GLOBAL_INCLUDE_DESTINATION}/${PROJECT_NAME} )
foreach(File ${PROTO_HDRS})
  add_custom_command(TARGET ${PROJECT_NAME}_generate_headers POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy ${File} ${CATKIN_DEVEL_PREFIX}/${CATKIN_GLOBAL_INCLUDE_DESTINATION}/${PROJECT_NAME} 
  )
endforeach()

install(TARGETS atwork_pb_msgs
  ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)

install(FILES ${PROTO_HDRS}
  DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
)

