function [curDirection, curThreshold] = findDirection(directionVector, currentDir)

%initialization of values for simulink
curDirection = "N";
curThreshold = directionVector(1);

% given the obtuse angle 135 of beginner tracks, if the drone is heading N
% the next track section can only be NE or NW (adjacent directions)
% this logic is implemented for all 8 directions to find the next direction
% and a threshold value is taken of how many pixels are detected of track
% vs non-track in that direction
if currentDir == "N"
    if directionVector(5) > directionVector(6)
        curDirection = "NE";
        curThreshold = directionVector(5);
    else
        curDirection = "NW";
        curThreshold = directionVector(6);
    end
elseif currentDir == "E"
    if directionVector(5) > directionVector(7)
        curDirection = "NE";
        curThreshold = directionVector(5);
    else
        curDirection = "SE";
        curThreshold = directionVector(7);
    end
elseif currentDir == "S"
    if directionVector(7) > directionVector(8)
        curDirection = "SE";
        curThreshold = directionVector(7);
    else
        curDirection = "SW";
        curThreshold = directionVector(8);
    end
elseif currentDir == "W"
    if directionVector(6) > directionVector(8)
        curDirection = "NW";
        curThreshold = directionVector(6);
    else
        curDirection = "SW";
        curThreshold = directionVector(8);
    end
elseif currentDir == "NE"
    if directionVector(1) > directionVector(2)
        curDirection = "N";
        curThreshold = directionVector(1);
    else
        curDirection = "E";
        curThreshold = directionVector(2);
    end
elseif currentDir == "NW"
    if directionVector(1) > directionVector(4)
        curDirection = "N";
        curThreshold = directionVector(1);
    else
        curDirection = "W";
        curThreshold = directionVector(4);
    end
elseif currentDir == "SE"
    if directionVector(3) > directionVector(2)
        curDirection = "S";
        curThreshold = directionVector(3);
    else
        curDirection = "E";
        curThreshold = directionVector(2);
    end
elseif currentDir == "SW"
    if directionVector(3) > directionVector(4)
        curDirection = "S";
        curThreshold = directionVector(3);
    else
        curDirection = "W";
        curThreshold = directionVector(4);
    end
else
    [~, index] = max(directionVector);
    if index == 1
        curDirection = "N";
        curThreshold = directionVector(1);
    elseif index == 2
        curDirection = "E";
        curThreshold = directionVector(2);
    elseif index == 3
        curDirection = "S";
        curThreshold = directionVector(3);
    elseif index == 4
        curDirection = "W";
        curThreshold = directionVector(4);
    elseif index == 5
        curDirection = "NE";
        curThreshold = directionVector(5);
    elseif index == 6
        curDirection = "NW";
        curThreshold = directionVector(6);
    elseif index == 7
        curDirection = "SE";
        curThreshold = directionVector(7);
    elseif index == 8
        curDirection = "SW";
        curThreshold = directionVector(8);
    else
        curDirection = "N";
        curThreshold = directionVector(1);
    end
end
 
