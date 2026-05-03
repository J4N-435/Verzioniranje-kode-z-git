FROM ubuntu:latest
RUN apt-get update && apt-get install -y g++
COPY . /app
WORKDIR /app
RUN g++ Vaja2.cpp -o vaja2
# docker run <ime> <ime_datoteke>
ENTRYPOINT ["./vaja2"]