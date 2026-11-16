// FUN_1801f8ed0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801f8ed0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801f8ed0(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  ULONGLONG UVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 local_res18 [8];
  undefined1 auStack_6b8 [32];
  undefined **local_698;
  char *local_690;
  undefined1 local_688;
  undefined1 local_687;
  char *local_678;
  longlong local_670;
  char *local_668;
  undefined8 local_660;
  undefined *local_658;
  char local_648 [1536];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_6b8;
  local_res18[0] = param_3;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar6 = DAT_1808e7770;
  lVar7 = DAT_1808da460;
  if ((DAT_1808e7770 == DAT_1808da460) && (lVar8 = DAT_180c63328, DAT_180c63328 != 0))
  goto LAB_1801f906a;
  UVar5 = GetTickCount64();
  if ((lVar6 == lVar7) && (UVar5 < DAT_180c63320)) {
    lVar8 = 0;
    goto LAB_1801f906a;
  }
  local_658 = &DAT_1808e7720;
  iVar4 = FUN_1805f68d0(&DAT_1808e7720);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808e776c == 0x7fffffff) {
    DAT_1808e776c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar9 = 1000;
  if (DAT_1808e7770 == lVar7) {
    if ((DAT_180c63328 == 0) && (DAT_180c63320 <= UVar5)) goto LAB_1801f8fd4;
  }
  else {
    DAT_1808e7710 = 1000;
LAB_1801f8fd4:
    lVar6 = -1;
    do {
      local_670 = lVar6 + 1;
      lVar8 = lVar6 + 1;
      lVar6 = local_670;
    } while ("client.dll:488BD14881C1????????E9????????CC4053574883EC28"[lVar8] != '\0');
    local_678 = "client.dll:488BD14881C1????????E9????????CC4053574883EC28";
    local_668 = "patterns::refresh_model_cloth";
    local_660 = 0x1d;
    DAT_180c63328 = FUN_1800e5d20(&local_668,&local_678);
    DAT_1808e7770 = lVar7;
    DAT_180c63320 = 0xffffffffffffffff;
    if (DAT_180c63328 == 0) {
      DAT_180c63320 = DAT_1808e7710 + UVar5;
      uVar9 = 60000;
      if (DAT_1808e7710 < 60000) {
        uVar9 = DAT_1808e7710 * 2;
      }
    }
    DAT_1808e7710 = uVar9;
  }
  lVar8 = DAT_180c63328;
  FUN_1805f68fc(&DAT_1808e7720);
LAB_1801f906a:
  cVar2 = FUN_1801fac60(lVar8,(longlong)*(int *)(param_1 + 1),
                        (longlong)*(int *)((longlong)param_1 + 0xc));
  if (cVar2 == '\0') {
    if (DAT_180c63318 != '\0') {
    }
    DAT_180c63318 = '\x01';
    FUN_18063ab10(local_648,0,0x600);
    FUN_18015ad60(local_648,0x600,0xffffffffffffffff,"reason=native_ABI_unverified flag_write=0");
  }
  else {
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    if (param_2 == 0) {
      local_687 = 0;
      bVar1 = false;
    }
    else {
      local_688 = 0;
      cVar2 = FUN_1804514f0(&local_688,param_2,1);
      if (cVar2 == '\0') {
        bVar1 = false;
        local_687 = 0;
      }
      else {
        local_687 = 1;
        bVar1 = true;
      }
    }
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    if (!bVar1) {
    }
    cVar2 = FUN_1804513c0(param_2,1,1);
    if (cVar2 == '\0') {
    }
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    cVar2 = FUN_1801ad7b0(param_2,local_res18);
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    if (cVar2 == '\0') {
    }
    cVar2 = FUN_1801a5f80(lVar8,*param_1);
    if (cVar2 != '\0') {
    }
    cVar2 = FUN_1804513c0(param_2,1,1);
    if (cVar2 == '\0') {
      bVar3 = 0;
    }
    else {
      lVar7 = FUN_18017ea70();
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
      bVar3 = FUN_1801ad7b0(param_2,&local_688);
      lVar7 = FUN_18017ea70();
      if (*(int *)(lVar7 + 4) != 0) {
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
      }
    }
    FUN_18063ab10(local_648,0,0x600);
    local_690 = (char *)CONCAT44(local_690._4_4_,(uint)bVar3);
    local_698 = (undefined **)*param_1;
    FUN_18015ad60(local_648,0x600,0xffffffffffffffff,"scene=0x%llx flag_restored=%d");
  }
  local_698 = &PTR_180700558;
  if (local_648[0] != '\0') {
    local_698 = (undefined **)&DAT_1806bcfc0;
  }
  local_690 = local_648;
  FUN_1800f6900(2);
}



