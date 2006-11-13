RM=rm -f

netfly : main.c cfg.c simpleproxy.c
	gcc -o netfly main.c cfg.c simpleproxy.c `pkg-config gtk+-2.0 --cflags --libs`


clean:
	$(RM) *.o netfly *~ core


