// FUN_18027dcb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18027dcb0 */

ulonglong FUN_18027dcb0(undefined8 param_1,longlong param_2,undefined4 param_3,float *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined2 uVar3;
  int iVar4;
  char *pcVar5;
  ULONGLONG UVar6;
  char *pcVar7;
  int iVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined8 extraout_XMM0_Qa;
  
  uVar10 = param_3;
  pcVar5 = (char *)FUN_18027e230(&DAT_180cbda50);
  if ((char)pcVar5 != '\0') {
    pcVar5 = (char *)FUN_18027e010(extraout_XMM0_Qa,uVar10);
    iVar4 = DAT_180c651f0;
    if ((int)pcVar5 == -1) goto LAB_18027dfcd;
    uVar9 = 0xffffffffffffffff;
    if ((DAT_180c651f0 == 0) && (UVar6 = GetTickCount64(), DAT_180c651e8 <= UVar6)) {
      iVar4 = FUN_1805f68d0(&DAT_1808f20f0);
      if (iVar4 != 0) goto LAB_18027dfe4;
      if (DAT_1808f213c == 0x7fffffff) {
        DAT_1808f213c = 0x7ffffffe;
        goto LAB_18027dff9;
      }
      if ((DAT_180c651f0 == 0) && (DAT_180c651e8 <= UVar6)) {
        DAT_180c651f0 = FUN_1804174b0("C_BaseEntity",0x6d279c31);
        DAT_180c651e8 = 0xffffffffffffffff;
        if (DAT_180c651f0 == 0) {
          DAT_180c651e8 = UVar6 + 1000;
        }
      }
      iVar4 = DAT_180c651f0;
      FUN_1805f68fc(&DAT_1808f20f0);
    }
    iVar8 = DAT_180c651f4;
    iVar1 = *(int *)((char *)(longlong)iVar4 + param_2);
    if ((iVar1 != 0) && (pcVar5 = (char *)(longlong)iVar4, iVar1 != -1)) goto LAB_18027dfcd;
    if ((DAT_180c651f4 == 0) && (UVar6 = GetTickCount64(), DAT_180c651d0 <= UVar6)) {
      iVar4 = FUN_1805f68d0(&DAT_1808f20a0);
      if (iVar4 != 0) goto LAB_18027dfe4;
      if (DAT_1808f20ec == 0x7fffffff) {
        DAT_1808f20ec = 0x7ffffffe;
        goto LAB_18027dff9;
      }
      if ((DAT_180c651f4 == 0) && (DAT_180c651d0 <= UVar6)) {
        DAT_180c651f4 = FUN_1804174b0("C_BaseEntity",0x9d930423);
        DAT_180c651d0 = 0xffffffffffffffff;
        if (DAT_180c651f4 == 0) {
          DAT_180c651d0 = UVar6 + 1000;
        }
      }
      iVar8 = DAT_180c651f4;
      FUN_1805f68fc(&DAT_1808f20a0);
    }
    iVar4 = DAT_180c651e0;
    lVar2 = *(longlong *)(iVar8 + param_2);
    if (lVar2 != 0) {
      if ((DAT_180c651e0 == 0) && (UVar6 = GetTickCount64(), DAT_180c651d8 <= UVar6)) {
        iVar4 = FUN_1805f68d0(&DAT_1808f2050);
        if (iVar4 != 0) {
LAB_18027dfe4:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808f209c == 0x7fffffff) {
          DAT_1808f209c = 0x7ffffffe;
LAB_18027dff9:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c651e0 == 0) && (DAT_180c651d8 <= UVar6)) {
          DAT_180c651e0 = FUN_1804174b0("CGameSceneNode",0xb89c7c3f);
          if (DAT_180c651e0 == 0) {
            uVar9 = UVar6 + 1000;
          }
          DAT_180c651d8 = uVar9;
        }
        iVar4 = DAT_180c651e0;
        FUN_1805f68fc(&DAT_1808f2050);
      }
      pcVar5 = (char *)(longlong)iVar4;
      if (*(longlong *)((char *)(longlong)iVar4 + lVar2) != 0) goto LAB_18027dfcd;
    }
    uVar3 = FUN_18027c670(param_2,param_3);
    pcVar7 = (char *)FUN_18027e290(&DAT_180cbda50,uVar3);
    pcVar5 = pcVar7;
    if ((((pcVar7 != (char *)0x0) && (*pcVar7 != '\0')) &&
        (pcVar5 = (char *)FUN_1802844f0(param_2,*(undefined4 *)(pcVar7 + 0x70)),
        (char)pcVar5 != '\0')) &&
       (pcVar5 = (char *)FUN_180284240(param_2,*(undefined4 *)(pcVar7 + 0x6c)), (char)pcVar5 != '\0'
       )) {
      *param_4 = (float)(byte)pcVar7[0x68] / 255.0;
      param_4[1] = (float)(byte)pcVar7[0x69] / 255.0;
      param_4[2] = (float)(byte)pcVar7[0x6a] / 255.0;
      param_4[3] = (float)(byte)pcVar7[0x6b] / 255.0;
      return 1;
    }
  }
LAB_18027dfcd:
  return (ulonglong)pcVar5 & 0xffffffffffffff00;
}



