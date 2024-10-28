%Reflected signal of unit step signal
clc; clear all; close all;
%% Discrete-time unit-step signal
time_negative=-5; time_positive=5;
n=time_negative:1:time_positive
index_t=0; u=[];
for i=time_negative:1:time_positive;
    index_t=index_t+1;
    if i==0 || i>0
        u=1;
    else
        u=0;
    end;
    n(2,index_t)=u;
end
subplot(2,1,1);
plot(n(1,:),n(2,:),'b*');
grid on;
%Discrete-time Reflected unit-step signal
%time_negative=-5; time_positive=5;
n_reflected=time_negative:1:time_positive;
index_t=0;
index_refl=(time_positive*2)+1;
for i=time_negative:1:time_positive
    index_t=index_t+1;
    n_reflected(2,index_t)=n(2,index_refl);
    index_refl=index_refl-1;
end
subplot(2,1,2);
plot(n_reflected(1,:),n_reflected(2,:),'b*');
grid on;
