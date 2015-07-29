/* 
 * File:   ShaderProgram.hpp
 * Author: Ale Strooisma
 *
 * Created on June 8, 2015, 5:04 PM
 */

#ifndef SHADERPROGRAM_HPP
#define	SHADERPROGRAM_HPP

#include <vector>
#include <string>


class ShaderProgram {
private:
	int program;
public:
	ShaderProgram(std::string vertexShader, std::string fragmentShader);
	ShaderProgram(std::string vertexShader, std::string geometryShader,
			std::vector<std::string>* attributes);
	ShaderProgram(std::string vertexShader, std::string geometryShader,
			std::string fragmentShader);
	ShaderProgram(std::string vertexShader, std::string geometryShader,
			std::string fragmentShader, std::vector<std::string>* attributes);
	virtual ~ShaderProgram();
	GLuint getProgram();
	GLint getUniformLocation(std::string name);
	GLuint getUniformBlockIndex(std::string name);
};

#endif	/* SHADERPROGRAM_HPP */
