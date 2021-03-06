#pragma once

class Map {
public:
	Terrain terrain;
	PathingMap pathing_map;
	Doodads doodads;

	PathingBrush brush;

	bool render_doodads = true;
	bool render_pathing = true;
	bool render_brush = true;

	fs::path filesystem_path;

	// Temporary for instancing. Replace by some kind of scenenode
	std::vector<StaticMesh*> meshes;
	double terrain_time;
	double terrain_tiles_time;
	double terrain_water_time;
	double terrain_cliff_time;
	double queue_time;
	double doodad_time;

	~Map();

	void load(fs::path path);

	bool save(fs::path path);

	void play_test();

	void render();
};