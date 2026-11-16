// FUN_180187c80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180187c80 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180187c80(longlong param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  DWORD DVar3;
  undefined8 *puVar4;
  LPCWSTR lpFileName;
  undefined8 uVar5;
  byte *pbVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_101a0 [32];
  undefined8 uStack_10180;
  longlong alStack_10178 [2];
  byte abStack_10168 [160];
  undefined **appuStack_100c8 [12];
  longlong lStack_10068;
  ulonglong uStack_10060;
  byte abStack_10048 [65552];
  
  bVar9 = false;
  uStack_10180 = param_2;
  puVar4 = (undefined8 *)FUN_180186ef0(auStack_101a0,param_1 + 0x20);
  if (7 < (ulonglong)puVar4[3]) {
    puVar4 = (undefined8 *)*puVar4;
  }
  iVar2 = FUN_1805fb620(puVar4,&lStack_10068,9,0xffffffff);
  if (iVar2 == 0) {
    FUN_18015b930(auStack_101a0);
    if ((uStack_10060 == 0) || (0x10000000 < uStack_10060)) goto LAB_180187fc4;
    lpFileName = (LPCWSTR)FUN_180186ef0(&lStack_10068,param_1 + 0x20);
    if (7 < *(ulonglong *)(lpFileName + 0xc)) {
      lpFileName = *(LPCWSTR *)lpFileName;
    }
    DVar3 = GetFileAttributesW(lpFileName);
    FUN_18015b930(&lStack_10068);
    if ((DVar3 == 0xffffffff) || ((DVar3 & 0x410) != 0)) goto LAB_180187fc4;
    *(int *)(param_1 + 0x40) = (int)uStack_10060;
    puVar4 = (undefined8 *)FUN_180186ef0(auStack_101a0,param_1 + 0x20);
    if (7 < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    iVar2 = FUN_1805fb620(puVar4,&lStack_10068,0x21,0xffffffff);
    if (iVar2 == 0) {
      *(longlong *)(param_1 + 0x48) = lStack_10068;
      FUN_18015b930(auStack_101a0);
      FUN_18063ab10(alStack_10178,0,0x110);
      uVar5 = FUN_180186ef0(&lStack_10068,param_1 + 0x20);
      FUN_18015e690(alStack_10178,uVar5,0x20);
      FUN_18015b930(&lStack_10068);
      FUN_18063ab10(abStack_10048,0,0x10000);
      uVar7 = 0xffffffff;
      uVar8 = 0;
      bVar1 = abStack_10168[*(int *)(alStack_10178[0] + 4)];
      while (((bVar1 & 6) == 0 && ((*param_2 == 0 || ((*(uint *)(*param_2 + 4) & 1) == 0))))) {
        FUN_1801771e0(alStack_10178,abStack_10048,0x10000);
        uVar8 = uVar8 + alStack_10178[1];
        for (pbVar6 = abStack_10048; pbVar6 != abStack_10048 + alStack_10178[1]; pbVar6 = pbVar6 + 1
            ) {
          uVar7 = uVar7 >> 8 ^ *(uint *)(&DAT_1808d9220 + (ulonglong)((*pbVar6 ^ uVar7) & 0xff) * 4)
          ;
        }
        bVar1 = abStack_10168[*(int *)(alStack_10178[0] + 4)];
      }
      *(uint *)(param_1 + 0x44) = ~uVar7;
      if ((((abStack_10168[*(int *)(alStack_10178[0] + 4)] & 1) != 0) && (uVar8 == uStack_10060)) &&
         ((*param_2 == 0 || ((*(uint *)(*param_2 + 4) & 1) == 0)))) {
        puVar4 = (undefined8 *)FUN_180186ef0(auStack_101a0,param_1 + 0x20);
        bVar9 = true;
        if (7 < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        FUN_1805fb620(puVar4,&lStack_10068,0x21,0xffffffff);
      }
      if (bVar9) {
        FUN_18015b930(auStack_101a0);
      }
      *(undefined ***)((longlong)alStack_10178 + (longlong)*(int *)(alStack_10178[0] + 4)) =
           std::basic_ifstream<char,std::char_traits<char>_>::vftable;
      *(int *)((longlong)alStack_10178 + (longlong)*(int *)(alStack_10178[0] + 4) + -4) =
           *(int *)(alStack_10178[0] + 4) + -0xb0;
      FUN_1800f63e0(abStack_10168);
      *(undefined ***)((longlong)alStack_10178 + (longlong)*(int *)(alStack_10178[0] + 4)) =
           std::basic_istream<char,std::char_traits<char>_>::vftable;
      *(int *)((longlong)alStack_10178 + (longlong)*(int *)(alStack_10178[0] + 4) + -4) =
           *(int *)(alStack_10178[0] + 4) + -0x18;
      appuStack_100c8[0] = std::ios_base::vftable;
      std::ios_base::_Ios_base_dtor((ios_base *)appuStack_100c8);
      FUN_18017cdd0(param_2);
    }
    *(undefined8 *)(param_1 + 0x48) = 0x8000000000000000;
  }
  FUN_18015b930(auStack_101a0);
LAB_180187fc4:
  FUN_18017cdd0(param_2);
}



