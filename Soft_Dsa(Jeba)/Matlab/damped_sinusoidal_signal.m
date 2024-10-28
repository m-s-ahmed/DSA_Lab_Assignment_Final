%%reflected signal of damp sinusoidal signal
clc;clear all;close all;
%% Discrete-time Exponentially Damped Sinusoidal Signal(using A=60, a=6 and phi=0):
%x(t)=A*exp(-a*t)*sin((2*pi*f*t)+phi);
A=60; a=6; phi=0; n_exp_decay=[];
time_start=0; time_end=1;
time_increment=0.001; sampling_freq=1/time_increment;
%n=0:0.001:1;
sin_t=0.1; f=1/sin_t;
n_exp_decay=time_start:time_increment:time_end;
index_t=0;
for t=time_start:time_increment:time_end
    index_t=index_t+1;
    n_exp_decay(2,index_t)=A*exp(-a*t)*sin((2*pi*f*t)+phi);
end
subplot(3,1,1);
plot(n_exp_decay(1,:),n_exp_decay(2,:),'b*');
xlabel('Time');
ylabel('Amplitude');
title('Exponentially Damped Sinusoidal signal');
grid on;
zoom xon;

len_exp_decay=length(n_exp_decay(2,:));
n_exp_index=[];
n_exp_index=-time_end:time_increment:-time_start;
n_exp_index(2,1:length(n_exp_index))=0;
n_exp_decaying=[];
n_exp_decaying=[n_exp_index n_exp_decay];

subplot(3,1,2);
plot(n_exp_decaying(1,:),n_exp_decaying(2,:),'b*');
xlabel('Time');
ylabel('Amplitude');
title('Exponentially Damped Sinusoidal signal');
grid on;
zoom xon;

%Discrete-time Reflected Exponentially Damped sinusoidal signal:
n_exp_reflected=-time_end:time_increment:time_end;
index_t=0;
index_refl=length(n_exp_decaying);
u_refl=[];
for ii=n_exp_reflected;
    index_t=index_t+1;
    n_exp_reflected(2,index_refl)=n_exp_decaying(2,index_t);
    index_refl=index_refl-1;
end
subplot(3,1,3);
plot(n_exp_reflected(1,:),n_exp_reflected(2,:),'b*');
xlabel('Time');
ylabel('Amplitude');
title('Reflected Exponentially Damped Sinusoidal signal');
grid on;
zoom xon;
