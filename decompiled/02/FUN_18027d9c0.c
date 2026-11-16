// FUN_18027d9c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18027d9c0 */

undefined8 FUN_18027d9c0(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  ULONGLONG UVar6;
  char *pcVar7;
  ulonglong uVar8;
  
  cVar2 = FUN_18027e230(&DAT_180cbda50);
  if (cVar2 != '\0') {
    iVar4 = FUN_18027e010();
    iVar5 = DAT_180c65218;
    if (iVar4 == -1) goto LAB_18027dc6c;
    uVar8 = 0xffffffffffffffff;
    if ((DAT_180c65218 == 0) && (UVar6 = GetTickCount64(), DAT_180c65210 <= UVar6)) {
      iVar5 = FUN_1805f68d0(&DAT_1808f2190);
      if (iVar5 != 0) goto LAB_18027dc85;
      if (DAT_1808f21dc == 0x7fffffff) {
        DAT_1808f21dc = 0x7ffffffe;
        goto LAB_18027dc9a;
      }
      if ((DAT_180c65218 == 0) && (DAT_180c65210 <= UVar6)) {
        DAT_180c65218 = FUN_1804174b0("C_BaseEntity",0x6d279c31);
        DAT_180c65210 = 0xffffffffffffffff;
        if (DAT_180c65218 == 0) {
          DAT_180c65210 = UVar6 + 1000;
        }
      }
      iVar5 = DAT_180c65218;
      FUN_1805f68fc(&DAT_1808f2190);
    }
    iVar4 = DAT_180c65204;
    if ((*(int *)(iVar5 + param_2) != 0) && (*(int *)(iVar5 + param_2) != -1)) {
      return 0;
    }
    if ((DAT_180c65204 == 0) && (UVar6 = GetTickCount64(), DAT_180c65208 <= UVar6)) {
      iVar5 = FUN_1805f68d0(&DAT_1808f21e0);
      if (iVar5 != 0) goto LAB_18027dc85;
      if (DAT_1808f222c == 0x7fffffff) {
        DAT_1808f222c = 0x7ffffffe;
        goto LAB_18027dc9a;
      }
      if ((DAT_180c65204 == 0) && (DAT_180c65208 <= UVar6)) {
        DAT_180c65204 = FUN_1804174b0("C_BaseEntity",0x9d930423);
        DAT_180c65208 = 0xffffffffffffffff;
        if (DAT_180c65204 == 0) {
          DAT_180c65208 = UVar6 + 1000;
        }
      }
      iVar4 = DAT_180c65204;
      FUN_1805f68fc(&DAT_1808f21e0);
    }
    iVar5 = DAT_180c65200;
    lVar1 = *(longlong *)(iVar4 + param_2);
    if (lVar1 != 0) {
      if ((DAT_180c65200 == 0) && (UVar6 = GetTickCount64(), DAT_180c651f8 <= UVar6)) {
        iVar5 = FUN_1805f68d0(&DAT_1808f2140);
        if (iVar5 != 0) {
LAB_18027dc85:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808f218c == 0x7fffffff) {
          DAT_1808f218c = 0x7ffffffe;
LAB_18027dc9a:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c65200 == 0) && (DAT_180c651f8 <= UVar6)) {
          DAT_180c65200 = FUN_1804174b0("CGameSceneNode",0xb89c7c3f);
          if (DAT_180c65200 == 0) {
            uVar8 = UVar6 + 1000;
          }
          DAT_180c651f8 = uVar8;
        }
        iVar5 = DAT_180c65200;
        FUN_1805f68fc(&DAT_1808f2140);
      }
      if (*(longlong *)(iVar5 + lVar1) != 0) {
        return 0;
      }
    }
    uVar3 = FUN_18027c670(param_2,param_3);
    pcVar7 = (char *)FUN_18027e290(&DAT_180cbda50,uVar3);
    if ((((pcVar7 != (char *)0x0) && (*pcVar7 != '\0')) &&
        (cVar2 = FUN_1802844f0(param_2,*(undefined4 *)(pcVar7 + 0x70)), cVar2 != '\0')) &&
       (cVar2 = FUN_180284240(param_2,*(undefined4 *)(pcVar7 + 0x6c)), cVar2 != '\0')) {
      return 1;
    }
  }
LAB_18027dc6c:
  return 0;
}



