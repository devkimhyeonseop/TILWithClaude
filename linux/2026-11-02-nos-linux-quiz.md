# 2026-11-02 관리사 필기: 리눅스 (디렉터리·중요 파일·권한)

## 배운 것
- 디렉터리: `/etc` 설정, `/home` 일반 사용자 홈, `/root` 관리자 홈, `/var/log` 로그, `/tmp` 임시, `/dev` 장치, `/proc` 프로세스·커널 정보
- 중요 파일: `/etc/passwd`(사용자 정보), `/etc/shadow`(암호), `/etc/group`, `/etc/hosts`, `/etc/resolv.conf`(DNS 서버), `/etc/fstab`(마운트 설정), `/etc/services`
- `ls -l` 첫 글자: `-` 파일, `d` 디렉터리, `l` 링크
- umask 022 → 새 파일 **644**(소유자 rw, 그룹·기타 r), 새 디렉터리 755
- 디스크 `df`(남은 용량), `du`(폴더 크기), `fdisk`(파티션), 서비스 `systemctl start|stop|status 이름`

## 틀린 것
- 관리자 홈을 `/home`으로 답함 → `/root`
- 디스크 남은 용량을 `fdisk`로 답함 → `df` (fdisk는 파티션 도구)
- 서비스 시작을 `ps`로 답함 → `systemctl start 이름`
- 마운트 설정 파일을 `mount`로 답함 → `/etc/fstab` (mount는 명령, fstab은 설정 파일)
- umask 022를 "읽기만"으로 해석함 → 파일 644 (소유자는 읽기·쓰기 가능)
- `/etc/passwd`를 `etc/password`로 씀 (철자, 앞의 `/`)

## 다시 볼 것
- `/root`와 `/home`, `df`/`du`/`fdisk`, `mount`/`fstab` 구분 (내일 아침 복습)
- 서비스는 `systemctl`

## AI에게 확인한 것
- 비슷한 이름(df·du·fdisk, mount·fstab)은 "무엇을 하는지" 한 줄로 붙여 구분하기로 함
- 오픽 데일리 3문제도 이어서 진행함
