CFLAGS = --std=c++20 -02
LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi

Twister3D: main.cpp
	g++ $(CFlags) -o Twister3D main.cpp $(LDFLAGS)

.PHONY: test clean

test: Twister3D
	./twister3D

clean:
	rm -f twister3D
