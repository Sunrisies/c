# 定义C编译器和编译选项  
CC = gcc  
CFLAGS = -Wall -Wextra -I.  
  
# 定义C++编译器和编译选项  
CXX = g++  
CXXFLAGS = $(CFLAGS)  
  
# 定义源文件列表  
# 区分C和C++源文件  
C_SRCS = $(wildcard main.c utils/*.c)  
CPP_SRCS = $(wildcard utils/*.cpp)  
  
# 定义目标文件名  
TARGET = myprogram  
  
# 默认的make目标：构建程序  
all: $(TARGET)  
  
# 编译目标  
$(TARGET): $(C_SRCS) $(CPP_SRCS)  
	$(CXX) $(CXXFLAGS) $(C_SRCS) $(CPP_SRCS) -o $@  
  
# 清除生成的文件  
clean:  
	rm -f $(TARGET) *.o utils/*.o