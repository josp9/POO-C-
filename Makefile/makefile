SRC_DIR := src
OBJ_DIR := obj
BIN_DIR := bin

EXE := $(BIN_DIR)/main
SRC := $(wildcard $(SRC_DIR)/*.cpp)
OBJ := $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

CPPFLAGS := -Iinclude -MMD -MP
CXXFLAGS   := -Wall
CXXFLAGS = -Wall -Wextra -Werror
LDFLAGS  := -Llib
LDLIBS   := -lm

ifeq ($(OS),Windows_NT)
    
    EXE := $(BIN_DIR)/main.exe
    RM := del /Q
else
    
    RM := rm -rvf
endif

.PHONY: all clean

all: $(EXE)

$(EXE): $(OBJ) | $(BIN_DIR)
	$(CXX) $(LDFLAGS) $^ $(LDLIBS) -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@

$(BIN_DIR) $(OBJ_DIR):
	mkdir -p $@

clean:
	find . -type f | xargs touch
	$(RM) main main.exe
	@$(RM) -rv $(BIN_DIR) $(OBJ_DIR)

-include $(OBJ:.o=.d)