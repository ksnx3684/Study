package com.example.json.service;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.stream.Collectors;

public class CompanyService {

	// company.json 파일을 전부 읽어서 String 으로 반환
	public String getCompany() throws IOException {
		return readLines("company.json");
	}

	// companies.json 파일을 전부 읽어서 String 으로 반환
	public String getCompanies() throws IOException {
		return readLines("companies.json");
	}

	// fileName 의 파일 내용을 전부 String 으로 읽어서 반환
	private String readLines(String fileName) {
		return new BufferedReader(
			new InputStreamReader(
				// 지정한 fileName 을 resources 디렉토리에서 읽어 옴
				this.getClass().getClassLoader().getResourceAsStream(fileName)
			)
		).lines().collect(Collectors.joining());
	}
	
}
