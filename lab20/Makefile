CXX = g++
CXXFLAGS = -std=c++14 -Wall
SRCDIR = src
TESTDIR = test
BUILDDIR = build
BINDIR = bin

SRC = $(SRCDIR)/entity.cpp $(SRCDIR)/list.cpp $(SRCDIR)/featurephone.cpp $(SRCDIR)/smartphone.cpp
OBJ = $(patsubst $(SRCDIR)/%.cpp, $(BUILDDIR)/%.o, $(SRC))

MAIN_SRC = $(SRCDIR)/main.cpp
MAIN_OBJ = $(patsubst $(SRCDIR)/%.cpp, $(BUILDDIR)/%.o, $(MAIN_SRC))

TEST_SRC = $(TESTDIR)/test.cpp
TEST_OBJ = $(patsubst $(TESTDIR)/%.cpp, $(BUILDDIR)/%.o, $(TEST_SRC))

TARGET = $(BINDIR)/app
TEST_TARGET = $(BINDIR)/test

all: $(TARGET)

# Збірка основної програми
$(TARGET): $(OBJ) $(MAIN_OBJ)
	mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Збірка тестової програми
test: $(TEST_TARGET)

$(TEST_TARGET): $(OBJ) $(TEST_OBJ)
	mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Правило для компіляції вихідних файлів
$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp
	mkdir -p $(BUILDDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Правило для компіляції тестових файлів
$(BUILDDIR)/%.o: $(TESTDIR)/%.cpp
	mkdir -p $(BUILDDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(BUILDDIR) $(BINDIR)

.PHONY: clean all test
