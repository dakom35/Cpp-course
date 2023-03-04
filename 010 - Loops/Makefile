CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		main.o fonctions.o 

LIBS = 

TARGET =	main.exe

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	del -f $(OBJS) $(TARGET)
