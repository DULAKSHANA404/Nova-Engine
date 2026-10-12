#include "Application.h"
#include "Renderer/data.h"

#include <iostream>

namespace Nova
{
	void Application::Run()
	{
		while (!m_window.IsWindowOpen())
		{
			glClear(GL_COLOR_BUFFER_BIT);
			glClearColor(0.07f, 0.13f, 0.17f, 1.0f);
			glUseProgram(m_shader.ProgramID);
			glBindVertexArray(m_buffer.VAO);
			glDrawElements(GL_TRIANGLES, 3, GL_UNSIGNED_INT, 0);
			
			m_window.OnUpdate();
		}
	}

	Application::Application()
	{
		std::cout << "Nova started..." << "\n";
		m_window.WindowInit();
		std::cout << "Nova window initized.." << "\n";
		m_buffer.BufferInit();
		std::cout << "Nova Buffers initized.." << "\n";
		m_shader.ShaderInit();
		std::cout << "Shader and programme initized.." << "\n";

		m_shader.CompileFragmentShader();
		m_shader.CompileVertexShader();
		m_shader.CompilePrograme();

		m_buffer.VertexBuffer(vertices, sizeof(vertices));
		m_buffer.ElementBuffer(indices, sizeof(indices));
		m_buffer.VertexArray();
		
	}
	Application::~Application(){}
}