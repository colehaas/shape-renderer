#Robert Haas

default: 
	g++ -std=c++11 -Wall -g raytrace.cpp Camera.cpp ImagePlane.cpp Ray.cpp Trace.cpp Sphere.cpp Plane.cpp Scene.cpp OutputImage.cpp

intr:
	g++ -std=c++11 -Wall -g A4driver.cpp Ray.cpp Sphere.cpp Plane.cpp -o intr

run: 
	./a.out

interrun:
	./intr

clean: 
	rm a.out intr output.ppm
