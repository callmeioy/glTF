#ifndef __COLLADA2GLTF_SHADERS__
#define __COLLADA2GLTF_SHADERS__

#define SHADER_STR(Src) #Src
#define SHADER(Src) SHADER_STR(Src)

namespace GLTF
{

    std::string inferTechniqueName(shared_ptr<JSONObject> technique, GLTFConverterContext& context);

    std::string getReferenceTechniqueID(shared_ptr<JSONObject> technique, GLTFConverterContext& context);
};

#endif