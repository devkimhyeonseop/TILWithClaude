# 2026-11-12 리눅스·윈도우 서버 명령어 오답

## 배운 것
- crontab 순서는 분 시 일 월 요일. 매주 월요일 10시는 `0 10 * * 1` (일요일 0, 월요일 1)
- chmod에서 `+`는 기존 권한에 추가, `=`는 덮어쓰기. `go=w`는 기존 r을 지움. `666`도 덮어씀
- 리다이렉션: `>` 덮어쓰기, `>>` 추가, `<` 입력
- `chage -W` 만료 경고, `-i`는 만료 후 유예(inactive). `lastb` 로그인 실패 기록, `gdisk` 2TB 이상 GPT
- Apache: POST 본문 크기 제한은 LimitRequestBody. 일반 사용자는 `su`가 아니라 `sudo`. Well-known port는 1~1023
- `ipconfig /renew` 갱신, `/release` 반납, `/flushdns` DNS 캐시 비우기
- `netstat -b` 포트를 쓰는 실행 파일, `-p` 특정 프로토콜, `-a` 전체, `-n` 숫자 표시
- `ping -t` 중단 전까지 계속, `-n` 횟수 지정, `-a` 이름 확인, `-f` 단편화 금지
- AD 계정: dsadd(추가)·dsmod(수정)·dsrm(삭제). `net user`는 로컬 계정 명령
- 실행 명령어: `compmgmt.msc`, `devmgmt.msc`, `gpedit.msc`는 .msc 필요. perfmon은 exe라 그대로 실행
- Resource Monitor는 resmon. Hyper-V는 실행 중에도 가상 디스크 이동 가능, 가상화할수록 자원 사용률은 높아짐
- IIS 로그는 저장 위치와 형식 변경 가능. DNS TTL은 캐싱 주기

## 틀린 것
- `chage -W`를 3번째로 틀림. IIS 로그, Hyper-V, netstat 옵션도 반복
- 옵션 짝 혼동: ping -t/-n, netstat -b/-p, chmod +/=, `ls > 파일`과 `>>`
- 부정형: DNS TTL·compmgmt·net user 문제

## 다시 볼 것
- 11/13 실기 모의 2/2: 리눅스·DNS·IIS·계정·공유 + 단답형·케이블
- 옵션이 나오는 명령어(ping, netstat, chage, ipconfig)는 짝으로 외우기

## AI에게 확인한 것
- 2026.02 29번의 "fdisk도 가능" 오류 신고는 해설 기준으로 gdisk를 정답으로 유지
- 2025.08 41번 compmgmt 해설은 확장자 기준 설명이라 시험 전 실제 실행으로 한 번 더 확인하기로 함
