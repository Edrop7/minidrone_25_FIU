function [N, E, S, W, NE, NW, SE, SW] = fieldOfViewPerDirection(BWimage)

%remove outer 40 columns to get a square 120x120 BW image
squareBWimage = im2uint8(BWimage(:, 21:140))./255; 

%split the BW image into 40x40 sections per direction
N = squareBWimage(1:40, 41:80);
E = squareBWimage(41:80, 81:120);
S = squareBWimage(81:120, 41:80);
W = squareBWimage(41:80, 1:40);
NE = squareBWimage(1:40, 81:120);
NW = squareBWimage(1:40, 1:40);
SE = squareBWimage(81:120, 81:120);
SW = squareBWimage(81:120, 1:40);