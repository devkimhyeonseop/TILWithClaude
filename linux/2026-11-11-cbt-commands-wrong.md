# 2026-11-11 필기 CBT: 리눅스·윈도우 명령어 오답

## 배운 것
- `chage -W` 만료 경고, -m 최소·-M 최대·-i 비활성 유예. `useradd -g [그룹] [사용자]`(-g 기본 그룹, -G 보조 그룹)
- Shell은 명령어 해석기, Kernel은 실제 실행. 설정 파일 `/etc`, 기본 명령어 `/bin`, 로그 `/var`, 장치 `/dev`, 부팅 로그 `/var/log/dmesg`
- 종료는 halt·poweroff·init 0·`shutdown -h now`, init 6은 재부팅
- `lsattr` 파일 속성(i 변경 불가), `nohup` 터미널을 닫아도 계속 실행, DNS 서버 주소는 `/etc/resolv.conf`
- vi: `x` 한 글자, `dd` 한 줄, `dw` 단어. `ifconfig eth0 192.168.2.4 up`, `crontab -r` 삭제, `systemctl`은 서비스 관리(비밀번호는 passwd)
- Apache 포트는 `Listen 8081`, SWAP은 메모리가 넘칠 때 쓰는 디스크 영역
- `cp ../abc.txt ~` (상위 디렉터리 ../, 홈 ~), `chmod +w`는 추가·`=`는 덮어쓰기라 `go=w`는 기존 권한이 사라짐, -rwxr-x--x는 751, `pwd`는 현재 경로
- 윈도우: `ipconfig /flushdns` DNS 캐시 초기화, `nslookup` DNS 질의, `pathping` = ping + tracert, `wbadmin.msc` 서버 백업, FSRM은 폴더 용량·파일 차단, FTP는 IIS 안에 있음, PowerShell에서도 DOS 명령 사용 가능

## 틀린 것
- `chage -W`를 -i로, `useradd` 인자 순서를 반대로 씀
- Shell과 Kernel, `nohup`과 `last` 혼동
- `/etc`와 `/bin`, `ipconfig /renew`와 `/flushdns`를 헷갈림 (flushdns 2번 틀림)

## 다시 볼 것
- 명령어와 옵션을 이름의 뜻(Warning, flush, remove)으로 연결해 외우기
- 윈도우 그룹 이름(Performance Log Users, Access Control Assistance Operators 등)은 오답 노트로 복습

## AI에게 확인한 것
- 해설의 번호와 보기가 어긋난 문제(Apache 503 설명)는 직접 비교해서 정리함
- 이미지가 필요한 문제는 지문 확인이 안 돼 정답 기준으로 정리
