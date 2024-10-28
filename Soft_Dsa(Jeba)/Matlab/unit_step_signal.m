% Unit step signal generation
clc; clear all; close all;
negative_time=-4; positive_time=4;
n=negative_time:1:positive_time;
index=0;
for i=negative_time:1:positive_time
    index=index+1;
    if i==0 || i>0
        u=1;
    else
        u=0;
    end
    n(2,index)=u;
end
figure(1)
stem(n(1,:),n(2,:),'b*');
xlabel('Time');
ylabel('Amplitude');
title('Unit step signal');
grid on;