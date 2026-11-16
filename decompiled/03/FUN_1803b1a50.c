// FUN_1803b1a50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803b1a50 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803b1a50(void)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 auStack_718 [32];
  undefined **local_6f8;
  char *local_6f0;
  byte local_6e8;
  undefined4 local_6e4;
  undefined1 local_6d8 [16];
  undefined8 local_6c8;
  undefined8 local_6c0;
  undefined1 local_6b8 [16];
  undefined8 local_6a8;
  undefined8 local_6a0;
  undefined8 local_698 [4];
  undefined1 local_678 [32];
  undefined1 local_658 [32];
  undefined1 local_638 [16];
  longlong local_628;
  char local_618 [1536];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_718;
  local_6e4 = 0;
  FUN_1800a8ec0(local_638);
  if (local_628 == 0) {
    FUN_1800f5370(local_698,local_638);
    puVar9 = local_698;
    bVar6 = true;
    bVar5 = false;
    bVar4 = false;
    bVar3 = false;
    bVar2 = false;
    local_6e4 = 1;
  }
  else {
    local_6b8 = (undefined1  [16])0x0;
    local_6a8 = 0;
    local_6a0 = 0;
    FUN_180159e60(local_6b8,L"Particles",9);
    local_6e4 = 0x62;
    local_6d8 = (undefined1  [16])0x0;
    local_6c8 = 0;
    local_6c0 = 0;
    FUN_180159e60(local_6d8,L"Cache",5);
    local_6e4 = 0x1e6;
    uVar8 = FUN_1800a7e60(local_658,local_638,local_6d8);
    local_6e4 = 0x1ee;
    puVar9 = (undefined8 *)FUN_1800a7e60(local_678,uVar8,local_6b8);
    bVar6 = false;
    bVar5 = true;
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    local_6e4 = 0x1fe;
    if (puVar9 == &DAT_1808e49e8) goto LAB_1803b1b8c;
  }
  puVar1 = puVar9 + 2;
  if (7 < (ulonglong)puVar9[3]) {
    puVar9 = (undefined8 *)*puVar9;
  }
  FUN_1800f5190(&DAT_1808e49e8,puVar9,*puVar1);
LAB_1803b1b8c:
  if (bVar2) {
    FUN_18015b930(local_678);
  }
  if (bVar3) {
    FUN_18015b930(local_658);
  }
  if (bVar4) {
    FUN_18015b930(local_6d8);
  }
  if (bVar5) {
    FUN_18015b930(local_6b8);
  }
  if (bVar6) {
    FUN_18015b930(local_698);
  }
  local_6e8 = 0;
  bVar7 = FUN_1803b0fb0();
  DAT_180bbec8a = bVar7;
  local_6e8 = bVar7;
  FUN_18063ab10(local_618,0,0x600);
  local_6f8 = (undefined **)CONCAT44(local_6f8._4_4_,(uint)bVar7);
  FUN_18015ad60(local_618,0x600,0xffffffffffffffff,"ready=%d assets=11 request_hooks=0 native_io=1")
  ;
  local_6f8 = &PTR_180700558;
  if (local_618[0] != '\0') {
    local_6f8 = (undefined **)&DAT_1806bcfc0;
  }
  local_6f0 = local_618;
  FUN_1800f6900((bVar7 ^ 1) + 1,local_6f8,"Particles","EMBEDDED_PARTICLE_CACHE");
  FUN_18015b930(local_638);
}



