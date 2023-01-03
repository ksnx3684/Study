package com.example.json;

import java.io.IOException;
import java.util.Map;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;

import com.example.json.service.CompanyService;
import com.fasterxml.jackson.core.type.TypeReference;
import com.fasterxml.jackson.databind.ObjectMapper;

@SpringBootApplication
public class JsonExampleApplication {

	private static void parseJsonObject() throws IOException {
		// 파싱을 위한 ObjectMapper 클래스 (from Jackson 라이브러리)
		ObjectMapper mapper = new ObjectMapper();
		// json 데이터를 가져오기 위한 service 클래스
		CompanyService companyService = new CompanyService();

		String companyJsonStr = companyService.getCompany();
		System.out.println(companyJsonStr);
		
		System.out.println("\n1. JsonStr -> Map");
		Map<String, Object> companyMap = mapper.readValue(companyJsonStr, new TypeReference<Map<String, Object>>() {});
		System.out.println("회사명: " + companyMap.get("name"));
		System.out.println("임직원 수: " + (int) companyMap.get("number_of_employees"));
		System.out.println("서비스: " + companyMap.get("services"));
	}

	public static void main(String[] args) throws IOException{
		//SpringApplication.run(JsonExampleApplication.class, args);
//		CompanyService companyService = new CompanyService();
//		String companyJsonStr = companyService.getCompany();
//		System.out.println(companyJsonStr);
		parseJsonObject();
	}
	
}
