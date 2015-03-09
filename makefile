CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g
LDFLAGS = -lboost_date_time

OBJECT = functions.o Goblin.o Barbarian.o Reptilian.o BlueMen.o Shadow.o Humanoid.o 
ASSIGNMENTOBJECT = assignment3.o 
DRIVEROBJECT = driver.o

SOURCE = functions.cpp Goblin.cpp Barbarian.cpp Reptilian.cpp BlueMen.cpp Shadow.cpp Humanoid.cpp assignment3.cpp driver.cpp

HEADER = functions.h Goblin.h Barbarian.h Reptilian.h BlueMen.h Shadow.h Humanoid.h

EXECUTABLE1 = assignment3
EXECUTABLE2 = driver

all: ${EXECUTABLE1} ${EXECUTABLE2}

${EXECUTABLE1}: ${OBJECT} ${ASSIGNMENTOBJECT} ${HEADER}
	${CXX} ${OBJECT} ${ASSIGNMENTOBJECT} ${LDFLAGS} -o ${EXECUTABLE1}

${EXECUTABLE2}: ${OBJECT} ${DRIVEROBJECT} ${HEADER}
	${CXX} ${OBJECT} ${DRIVEROBJECT} ${LDFLAGS} -o ${EXECUTABLE2}

${OBJECT}: ${SOURCE}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

${ASSIGNMENTOBJECT}: ${SOURCE}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

${DRIVEROBJECT}: ${SOURCE}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean:
	rm -rf *.o ${EXECUTABLE1} ${EXECUTABLE2}
