cmake_minimum_required(VERSION 2.8.7)
project(rci_pb_msgs)
find_package(catkin REQUIRED)
find_package(Protobuf REQUIRED)

include_directories(${PROTOBUF_INCLUDE_DIRS})

#set(RCI_PROTOS
#)

#protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS ${RCI_PROTOS})

#add_custom_target(copy ALL
#  DEPENDS ${PROTO_HDRS}
#)

#add_library(rci_pb_msgs ${PROTO_SRCS})
#target_link_libraries(rci_pb_msgs ${PROTOBUF_LIBRARIES})

#catkin_package(
#  LIBRARIES
#    rci_pb_msgs
#)

#file(MAKE_DIRECTORY ${CATKIN_DEVEL_PREFIX}/${CATKIN_GLOBAL_INCLUDE_DESTINATION}/${PROJECT_NAME} )
#foreach(File ${PROTO_HDRS})
#  add_custom_command(TARGET copy POST_BUILD
#    COMMAND ${CMAKE_COMMAND} -E copy ${File} ${CATKIN_DEVEL_PREFIX}/${CATKIN_GLOBAL_INCLUDE_DESTINATION}/${PROJECT_NAME} 
#  )
#endforeach()

#install(TARGETS rci_pb_msgs
#  ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
#  LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
#  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
#)

#install(FILES ${PROTO_HDRS}
#  DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
#)

