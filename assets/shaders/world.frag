#version 320 es
// #version 330
// update for Open GL ES 3.2
precision highp float;

uniform sampler2D diffuseTex;
uniform float alphaMask;

in VertexData
{
    vec2 uv;
    vec4 color;
} inData;

out vec4 fragColor;

void main()
{
//	vec4 diffuseColor = texture2D(diffuseTex, inData.uv);
	vec4 diffuseColor = texture(diffuseTex, inData.uv);
	if (diffuseColor.a < alphaMask) discard;
	else fragColor = diffuseColor * inData.color;
}
