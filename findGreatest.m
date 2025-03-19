function [N_val, E_val, S_val, W_val, NE_val, NW_val, SE_val, SW_val, direction] = findGreatest(N, E, S, W, NE, NW, SE, SW)

%providing an initial condition for simulink
direction = "N";

% sum 40x40 arrays per direction to find number of pixels with a non zero
% value
N_val = uint32(sum(N, "all"));
E_val = uint32(sum(E, "all"));
S_val = uint32(sum(S, "all"));
W_val = uint32(sum(W, "all"));
NE_val = uint32(sum(NE, "all"));
NW_val = uint32(sum(NW, "all"));
SE_val = uint32(sum(SE, "all"));
SW_val = uint32(sum(SW, "all"));

% identify the maximum direction (for debugging purposes, not in stateflow)
[~, index] = max([N_val, E_val, S_val, W_val, NE_val, NW_val, SE_val, SW_val]);
if index == 1
    direction = "N";
elseif index == 2
    direction = "E";
elseif index == 3
    direction = "S";
elseif index == 4
    direction = "W";
elseif index == 5
    direction = "NE";
elseif index == 6
    direction = "NW";
elseif index == 7
    direction = "SE";
elseif index == 8
    direction = "SW";
end