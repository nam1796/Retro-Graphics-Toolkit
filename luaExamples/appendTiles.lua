if project.have(project.tilesMask) then
	fl.alert("Started with "..tile.amt.." tiles")
	tile.append(10) -- The parameter is optional and defaults to one
	fl.alert("Now there are "..tile.amt.." tiles")
else
	project.haveMessage(project.tilesMask)
end
