SRCS=$(wildcard *.cpp)
OBJS=$(SRCS:.cpp=)
CPPFLAGS=-O2

all: $(OBJS)

% : %.cpp
	g++ $(CPPFLAGS) $^ -o $@

clean:
	$(RM) $(OBJS)
