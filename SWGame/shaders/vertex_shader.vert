#version 450 core

layout (location = 0) in vec3 vertex_position; 
  
out vec4 vertex_color; 

void main()
{
    vertex_color = vec4(0.5, 0.0, 0.0, 1.0);
   
   gl_Position = vec4(vertex_position, 1.0);
}