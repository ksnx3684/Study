package com.example.json.vo;

import java.util.List;

import com.fasterxml.jackson.annotation.JsonIgnoreProperties;
import com.fasterxml.jackson.annotation.JsonProperty;

import lombok.Data;

@Data // getter, setter 및 final 변수가 포함된 생성자 등 다양한 어노테이션들을 묶어 놓음
@JsonIgnoreProperties(ignoreUnknown = true) // 인식 불가능한 필드가 온 경우 무시한다
public class Company {
	private String name;			// 회사명
	@JsonProperty(value = "number_of_employees") // number_of_employees 필드를 numberOfEmployees 필드로 매핑
	private int numberOfEmployees;	// 임직원 수
	private List<String> services;	// 서비스들
}
