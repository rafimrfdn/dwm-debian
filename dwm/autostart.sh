#!/bin/sh

# to make this file works, copy or create symbolic link this (autostart.sh) file to ~/.local/share/dwm/
/usr/lib/policykit-1-gnome/polkit-gnome-authentication-agent-1 &
picom --config ~/.config/picom/picom.conf &
copyq &
pnmixer &
dwmblocks &
