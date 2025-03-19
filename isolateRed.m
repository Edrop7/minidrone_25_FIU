function image = isolateRed(Red, Green, Blue)

% create a mask with just the red track
% function mostly from thresholder app

imageCAT = cat(3, Red, Green, Blue);

minRed = 120;
maxRed = 255;
minBlue = 0;
maxBlue = 0;
minGreen = 0;
maxGreen = 0;

colorMask = (Red >= minRed & Red <= maxRed) & (Blue >= minBlue & Blue <= maxBlue) & (Green >= minGreen & Green <= maxGreen);

filteredImage = zeros(size(imageCAT), 'uint8'); % Initialize black image
filteredImage(:,:,1) = Red .* uint8(colorMask); % Red channel
filteredImage(:,:,2) = Green .* uint8(colorMask); % Green channel
filteredImage(:,:,3) = Blue .* uint8(colorMask); % Blue channel

image = filteredImage;
