RM=rm -f

netfly : main.c
	gcc -o netfly main.c `pkg-config --cflags --libs gtk+-2.0`


clean:
	$(RM) *.o netfly *~ core


