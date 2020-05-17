.PHONY: build
build:
	sudo docker build -t easy_grpc_test .

.PHONY: run
run:
	xhost + local:root
	sudo docker run -it \
    --network="host" \
	--env=DISPLAY=$(DISPLAY) \
	--env=QT_X11_NO_MITSHM=1 \
	--privileged \
	--mount type=bind,src=/dev,dst=/dev,readonly \
	--mount type=bind,src=`pwd`,dst=/app \
	--volume="/tmp/.X11-unix:/tmp/.X11-unix:rw" \
	 easy_grpc_test
