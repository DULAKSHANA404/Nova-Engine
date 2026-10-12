#pragma once

#include <glad/glad.h>

namespace Nova
{
	class Buffer
	{
	protected:
		GLuint VBO;
		GLuint EBO;
	public:
		GLuint VAO;
	public:
		Buffer() = default;
		void BufferInit();
		void VertexBuffer(GLfloat* verticies, size_t sizeofverticies);
		void ElementBuffer(GLuint* indicies, size_t sizeofindicies);
		void VertexArray();
	};
}