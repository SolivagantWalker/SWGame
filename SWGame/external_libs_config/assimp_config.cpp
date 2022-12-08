//The Asset - Importer - Lib(in short assimp) is a library to load and process geometric scenes from various 3D - Dataformats.
//It is mostly tailored at typical game scenarios by supporting a node hierarchy, static or skinned meshes,
//materials, bone animationsand potential texture data.But also some 3D - printing - and CAD - format are supported.
//The library is not designed for speed, it is primarily useful for importing assets from various sources onceand storing it in a engine 
//- specific format for easyand fast every - day - loading.
//assimp is also able to apply various post processing steps to the imported data such as conversion to indexed meshes, 
//calculation of normals or tangents / bitangents or conversion from right - handed to left - handed coordinate systems.
//
//The Assimp - Lib currently supports the following file formats(note that 
//	some loaders lack some features of their formats because some file formats contain data not supported by assimp, 
//	some stuff would require so much conversion work that it has not been implemented yet and some(most …) formats lack proper specifications) :
//
//	3D Manufacturing Format(.3mf)
//
//	Collada(.dae, .xml)
//
//	Blender(.blend)
//
//	Biovision BVH(.bvh)
//
//	3D Studio Max 3DS(.3ds)
//
//	3D Studio Max ASE(.ase)
//
//	glTF(.glTF)
//
//	glTF2.0 (.glTF)
//
//	KHR_lights_punctual(5.0)
//
//	KHR_materials_pbrSpecularGlossiness(5.0)
//
//	KHR_materials_unlit(5.0)
//
//	KHR_texture_transform(5.1 under test)
//
//	FBX - Format, as ASCIIand binary(.fbx)
//
//	Stanford Polygon Library(.ply)
//
//	AutoCAD DXF(.dxf)
//
//	IFC - STEP(.ifc)
//
//	Neutral File Format(.nff)
//
//	Sense8 WorldToolkit(.nff)
//
//	Valve Model(.smd, .vta)
//
//	Quake I(.mdl)
//
//	Quake II(.md2)
//
//	Quake III(.md3)
//
//	Quake 3 BSP(.pk3)
//
//	RtCW(.mdc)
//
//	Doom 3 (.md5mesh, .md5anim, .md5camera)
//
//	DirectX X(.x)
//
//	Quick3D(.q3o, .q3s)
//
//	Raw Triangles(.raw)
//
//	AC3D(.ac, .ac3d)
//
//	Stereolithography(.stl)
//
//	Autodesk DXF(.dxf)
//
//	Irrlicht Mesh(.irrmesh, .xml)
//
//	Irrlicht Scene(.irr, .xml)
//
//	Object File Format(.off)
//
//	Wavefront Object(.obj)
//
//	Terragen Terrain(.ter)
//
//	3D GameStudio Model(.mdl)
//
//	3D GameStudio Terrain(.hmp)
//
//	Ogre(.mesh.xml, .skeleton.xml, .material)
//
//	OpenGEX - Fomat(.ogex)
//
//	Milkshape 3D(.ms3d)
//
//	LightWave Model(.lwo)
//
//	LightWave Scene(.lws)
//
//	Modo Model(.lxo)
//
//	CharacterStudio Motion(.csm)
//
//	Stanford Ply(.ply)
//
//	TrueSpace(.cob, .scn)
//
//	XGL - 3D - Format(.xgl)
//
//
//Assimp is independent of the Operating System by nature, 
//providing a C++ interface for easy integration with game enginesand a 
//C - based interface to allow bindings to other programming languages.
//At the moment the library runs on any little - endian platform including X86 / Windows / Linux / Mac and X64 / Windows / Linux / Mac.
//Special attention was paid to keep the library as free as possible from dependencies































