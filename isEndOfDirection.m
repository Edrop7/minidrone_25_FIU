function hasReachedEnd = isEndOfDirection(directionVector, currentDir, curThreshold)

% mapping direction string to an index value for the directionVector values
% generated in the image processing section
if currentDir == "N"
    index = 1;
elseif currentDir == "E"
    index = 2;
elseif currentDir == "S"
    index = 3;
elseif currentDir == "W"
    index = 4;
elseif currentDir == "NE"
    index = 5;
elseif currentDir == "NW"
    index = 6;
elseif currentDir == "SE"
    index = 7;
elseif currentDir == "SW"
    index = 8;
end

% once there are 80% as many pixels of track in the 40x40 image of the
% current direction, the drone assumes the end of that direction was 
% reached and begins to search for the next direction to take
if directionVector(index) < ((80/100) * curThreshold)
    hasReachedEnd = true;
else
    hasReachedEnd = false;
end