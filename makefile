CFLAGS = -g
objects = main.o user.o utils.o send_receive.o command.o encode.o

ipmsg: $(objects)
	gcc $(CFLAGS) -o ipmsg $(objects) -lpthread

main.o: main.c command.h user.h ipmsg.h send_receive.h
	gcc $(CFLAGS) -c $^ 

user.o: user.c user.h command.h
	gcc $(CFLAGS) -c $^

utils.o: utils.c command.h
	gcc $(CFLAGS) -c $^

send_receive.o: send_receive.c send_receive.h command.h ipmsg.h user.h
	gcc $(CFLAGS) -c $^

command.o: command.c ipmsg.h command.h
	gcc $(CFLAGS) -c $^

encode.o: encode.c
	gcc $(CFLAGS) -c $^

.PHONY: clean
clean:
	rm -f ipmsg $(objects) *.gch
cgch:
	rm -f *.gch
