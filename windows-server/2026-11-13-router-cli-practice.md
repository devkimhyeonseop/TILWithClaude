# 2026-11-13 실기: 라우터(Cisco) 명령어 연습 1~7

## 배운 것
- 모드 확인: `>` 사용자, `#` 특권(`en`), `(config)#` 전역(`conf t`), `(config-if)#` 인터페이스, `(config-line)#` 라인, `(config-router)#` 라우터
- 인터페이스 설명: `interface fastethernet 0/0` → `description ICQA`
- 호스트 이름: `hostname ICQA-R1`
- 시리얼 IP: `interface serial 2/0` → `ip add 192.168.0.101 255.255.255.0` → `no shutdown`. 반대편이 없으면 `changed state to down`이 나오지만 정상
- 특권 모드 암호 `enable secret icqa123` (secret은 암호화, password는 평문)
- 콘솔 비밀번호: `line console 0` → `password icqa` → `login`
- 정적 경로 `ip route 192.168.20.0 255.255.255.0 192.168.10.254`, 기본 경로 `ip route 0.0.0.0 0.0.0.0 203.230.10.1`. 확인은 `show ip route`에서 `S`
- 저장 `copy r s`는 `#` 모드에서만 가능 (`(config)#`에서 치면 `Unrecognized command`). 설정 모드에서는 앞에 `do`를 붙임
- `?`로 가능한 명령과 형식을 확인하는 법

## 틀린 것
- 2번에서 `(config)#`에 `copy r s`를 쳐서 `Unrecognized command`가 나왔고, `end` 후 다시 저장함
- 5번 콘솔 비밀번호는 캡처에 `line console 0`과 `password icqa` 줄이 안 보여 `show running-config`로 확인하기로 함

## 다시 볼 것
- 8~10번: `show running-config`, `show ip interface brief`, RIP v2(`router rip` → `version 2` → `network 192.168.10.0`), `show ip route`, `copy r s`/`wr`
- 설정한 뒤 `show run`으로 확인하고 저장하는 습관
- 11/14 시험 전 단답형(케이블, 명령어) 한 번 더

## AI에게 확인한 것
- 영상 링크는 AI가 열 수 없어서 검색한 블로그의 실제 시험 형식(Description, Serial IP 설정)을 기준으로 문제를 만듦
- 연습 문제는 AI가 만든 것이라 실제 시험과 문구가 다를 수 있음
- 캡처로 1~4·6·7번은 확인했고 5번은 일부만 보여 확인 필요로 남김
