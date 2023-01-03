package com.example.json.vo;

import java.util.List;

import lombok.Data;

@Data
public class Company {
	private String name;			// 회사명
	private int numberOfEmployees;	// 임직원 수
	private List<String> services;	// 서비스들
}
