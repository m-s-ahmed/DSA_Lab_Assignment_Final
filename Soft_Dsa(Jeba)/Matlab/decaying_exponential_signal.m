%Decayeing exponential signal
clc; clear all; close all;
%x(t)=A*exp(-a*t)*sin((2*pi*f*t)+phi);
A=60; a=6; phi=0; n=[];
time_start=0; time_end=1;
time_increment=0.001;
%n=0:0.001:1;
sin_t=0.1; f=1/sin_t;
n=time_start:time_increment:time_end
index=0;
for t=n
    index=index+1;
    n(2,index)=A*exp(-a*t)*sin((2*pi*f*t)+phi);
end
figure(1);
plot(n(1,:),n(2,:),'b*-');
xlabel('Time');
ylabel('Amplitude');
title('Decayeing exponential signal');
grid on;