# 컴파일러 및 설정
CC      := gcc
AR      := ar
CFLAGS  := -Wall -Wextra -pedantic -std=c99
LDFLAGS := -Loutput -lmylib

# 디렉토리
SRC_DIR     := src
OUT_DIR     := output

# 파일들
TARGET      := $(OUT_DIR)/main
LIBRARY     := $(OUT_DIR)/libmylib.a
LIB_OBJ     := $(OUT_DIR)/mylib.o
MAIN_OBJ    := $(OUT_DIR)/main.o
HEADERS     := $(SRC_DIR)/mylib.h

# 기본 타겟
all: $(TARGET)

# 라이브러리 생성
$(LIBRARY): $(LIB_OBJ)
	$(AR) rcs $@ $^

# 오브젝트 파일 생성
$(OUT_DIR)/%.o: $(SRC_DIR)/%.c $(HEADERS)
	@mkdir -p $(OUT_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# 실행 파일 생성
$(TARGET): $(MAIN_OBJ) $(LIBRARY)
	$(CC) $(MAIN_OBJ) $(LDFLAGS) -o $@

# 정리
clean:
	rm -rf $(OUT_DIR)
