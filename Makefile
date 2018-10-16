
CFLAGS = -Wall
OBJS = func1.o func2.o main.o
TARGET = main

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)
%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@
clean: 
	rm -f $(TARGET) $(OBJS)
