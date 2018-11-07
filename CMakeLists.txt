# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)
# 项目信息
project (OpenCamera)
#添加预处理器
add_definitions(-DWITH_OPENSSL)
# 添加包含目录
include_directories("include")

# 添加库文件目录
link_directories(${CMAKE_SOURCE_DIR}/lib)
#添加库文件目录
# link_libraries("libeay32.lib")
# link_libraries("ssleay32.lib")

# 添加子目录
#add_subdirectory(plugin)
add_subdirectory(onvif)
#add_subdirectory(soap)
# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)
# 指定生成目标
add_executable(OpenCamera ${DIR_SRCS})
# 添加链接库
target_link_libraries(OpenCamera OnvifFunctions)