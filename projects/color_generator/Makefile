# --- Compiler and Flags ---
CXX = g++
# -MMD -MP: Generate dependency files for header tracking
CXXFLAGS = -std=c++20 -Isrc -Iinclude -Wall -Wextra -MMD -MP
LDFLAGS =

# --- Directories ---
BUILD_DIR = build
SINGLE_BUILD_DIR = $(BUILD_DIR)/single
FULL_BUILD_DIR = $(BUILD_DIR)/full_build

# --- Source Files ---
SRC_FILES = $(shell find src -type f -name "*.cpp")
MAIN_SRC = main.cpp
ALL_SRCS = $(MAIN_SRC) $(SRC_FILES)

# --- Single Build ---
SINGLE_TARGET = $(SINGLE_BUILD_DIR)/program
SINGLE_OBJS = $(patsubst %.cpp, $(SINGLE_BUILD_DIR)/%.o, $(ALL_SRCS))

# --- Full Build ---
FULL_OBJS = $(patsubst %.cpp, $(FULL_BUILD_DIR)/%.o, $(ALL_SRCS))
FULL_EXES = $(patsubst %.cpp, $(FULL_BUILD_DIR)/%, $(ALL_SRCS))

# --- Phony Targets ---
.PHONY: all single full run clean

all: single

single: $(SINGLE_TARGET)

full: $(FULL_EXES)

run: $(SINGLE_TARGET)
	@echo "Running $(SINGLE_TARGET)..."
	@$(SINGLE_TARGET)

clean:
	@echo "Cleaning build directory..."
	@rm -rf $(BUILD_DIR)

# --- Build Rules ---

# 1. Link single target
$(SINGLE_TARGET): $(SINGLE_OBJS)
	@echo "Linking single target: $@"
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

# 2. Compile single build objects
$(SINGLE_OBJS): $(SINGLE_BUILD_DIR)/%.o: %.cpp
	@echo "Compiling for single: $<"
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# 3. Link full build executables
$(FULL_EXES): $(FULL_BUILD_DIR)/%: $(FULL_BUILD_DIR)/%.o
	@echo "Linking for full: $@"
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -o $@ $< $(LDFLAGS)

# 4. Compile full build objects
$(FULL_OBJS): $(FULL_BUILD_DIR)/%.o: %.cpp
	@echo "Compiling for full: $<"
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# --- Dependencies ---
DEP_FILES = $(SINGLE_OBJS:.o=.d) $(FULL_OBJS:.o=.d)
-include $(DEP_FILES)
