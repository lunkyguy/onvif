# 添加包含目录
#include_directories(../soap)
#添加预处理器
add_definitions(-DWITH_OPENSSL)
# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_LIB_SRCS 变量
aux_source_directory(. DIR_LIB_SRCS)
# 生成链接库
add_library (OnvifFunctions ${DIR_LIB_SRCS})