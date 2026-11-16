// FUN_1805986f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805986f0 */

uint FUN_1805986f0(longlong param_1,undefined4 param_2,uint param_3,undefined4 *param_4,uint param_5
                  )

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  size_t sVar4;
  uint *puVar5;
  ulonglong uVar6;
  char *pcVar7;
  uint uVar8;
  
  uVar8 = 0;
  uVar6 = (ulonglong)param_3;
  if ((int)param_5 < 0) {
    param_5 = 0;
  }
  switch(param_2) {
  case 0:
    uVar8 = 1;
    if ((param_4 != (undefined4 *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x261);
    }
    break;
  case 1:
    if (param_3 < 4) {
      uVar2 = 0;
      uVar8 = 4;
      if ((param_4 != (undefined4 *)0x0) && (3 < param_5)) {
        if (param_3 == 0) {
          uVar2 = *(undefined4 *)(param_1 + 0x264);
        }
        else {
          if (param_3 == 1) {
            *param_4 = *(undefined4 *)(param_1 + 0x268);
            break;
          }
          if (param_3 == 2) {
            *param_4 = *(undefined4 *)(param_1 + 0x26c);
            break;
          }
          if (param_3 == 3) {
            *param_4 = *(undefined4 *)(param_1 + 0x270);
            break;
          }
        }
        *param_4 = uVar2;
      }
    }
    break;
  case 2:
    if (param_3 < 4) {
      uVar2 = 0;
      uVar8 = 4;
      if ((param_4 != (undefined4 *)0x0) && (3 < param_5)) {
        if (param_3 == 0) {
          uVar2 = *(undefined4 *)(param_1 + 0x27c);
        }
        else {
          if (param_3 == 1) {
            *param_4 = *(undefined4 *)(param_1 + 0x280);
            break;
          }
          if (param_3 == 2) {
            *param_4 = *(undefined4 *)(param_1 + 0x284);
            break;
          }
          if (param_3 == 3) {
            *param_4 = *(undefined4 *)(param_1 + 0x288);
            break;
          }
        }
        *param_4 = uVar2;
      }
    }
    break;
  case 3:
    uVar8 = 1;
    if ((param_4 != (undefined4 *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x260);
    }
    break;
  case 4:
    pcVar7 = *(char **)(param_1 + 0x1d8);
    if (pcVar7 != (char *)0x0) {
      sVar4 = strlen(pcVar7);
      uVar8 = (int)sVar4 + 1;
      if ((param_4 != (undefined4 *)0x0) && (uVar8 <= param_5)) {
        FUN_18063aed0(param_4,pcVar7,uVar8);
      }
    }
    break;
  case 5:
    uVar8 = 4;
    if ((param_4 != (undefined4 *)0x0) && (3 < param_5)) {
      *param_4 = *(undefined4 *)(param_1 + 0x114);
    }
    break;
  case 6:
    uVar8 = 4;
    if ((param_4 != (undefined4 *)0x0) && (3 < param_5)) {
      *param_4 = *(undefined4 *)(param_1 + 0x240);
    }
    break;
  case 7:
    if (*(uint *)(param_1 + 0x240) <= param_3) break;
    lVar3 = *(longlong *)(param_1 + 0x248);
    goto LAB_180598909;
  case 8:
    if (param_3 < *(uint *)(param_1 + 0x240)) {
      uVar1 = *(uint *)(*(longlong *)(param_1 + 600) + uVar6 * 4);
      uVar8 = uVar1 + 1;
      if ((param_4 != (undefined4 *)0x0) && (uVar8 <= param_5)) {
        FUN_18063aed0(param_4,*(undefined8 *)(*(longlong *)(param_1 + 0x250) + uVar6 * 8),uVar1);
        *(undefined1 *)((ulonglong)uVar1 + (longlong)param_4) = 0;
      }
    }
    break;
  case 9:
    uVar8 = 4;
    if ((param_4 != (undefined4 *)0x0) && (3 < param_5)) {
      *param_4 = *(undefined4 *)(param_1 + 0x1e0);
    }
    break;
  case 10:
    if ((*(int *)(param_1 + 0x1e0) != 1) || (*(uint *)(param_1 + 0x1e8) <= param_3)) break;
    lVar3 = *(longlong *)(param_1 + 0x200);
LAB_180598909:
    pcVar7 = *(char **)(lVar3 + uVar6 * 8);
    goto LAB_18059890d;
  case 0xb:
    uVar8 = 4;
    if ((param_4 != (undefined4 *)0x0) && (3 < param_5)) {
      *param_4 = *(undefined4 *)(param_1 + 0x220);
    }
    break;
  case 0xc:
    if (*(longlong *)(param_1 + 0x238) == 0) {
      if (*(uint *)(param_1 + 0x220) <= param_3) break;
    }
    else {
      puVar5 = (uint *)FUN_18057a3d0(uVar6);
      if (puVar5 == (uint *)0x0) break;
      uVar6 = (ulonglong)*puVar5;
    }
    if (*(longlong *)(param_1 + 0x228) != 0) {
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x230) + uVar6 * 4);
      uVar8 = uVar1 + 1;
      if ((param_4 != (undefined4 *)0x0) && (uVar8 <= param_5)) {
        FUN_18063aed0(param_4,*(undefined8 *)(*(longlong *)(param_1 + 0x228) + uVar6 * 8));
        *(undefined1 *)((ulonglong)uVar1 + (longlong)param_4) = 0;
      }
    }
    break;
  case 0xd:
    uVar8 = 2;
    if ((param_4 != (undefined4 *)0x0) && (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x18c);
    }
    break;
  case 0xe:
    uVar8 = 2;
    if ((param_4 != (undefined4 *)0x0) && (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x18e);
    }
    break;
  case 0xf:
    uVar8 = 1;
    if ((param_4 != (undefined4 *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x11c);
    }
    break;
  case 0x10:
    if (((param_3 < *(byte *)(param_1 + 0x11c)) && (uVar8 = 2, param_4 != (undefined4 *)0x0)) &&
       (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x120 + uVar6 * 2);
    }
    break;
  case 0x11:
    uVar8 = 4;
    if ((param_4 != (undefined4 *)0x0) && (3 < param_5)) {
      *param_4 = *(undefined4 *)(param_1 + 0x188);
    }
    break;
  case 0x12:
    uVar8 = 1;
    if ((param_4 != (undefined4 *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x11d);
    }
    break;
  case 0x13:
    if (((param_3 < *(byte *)(param_1 + 0x11d)) && (uVar8 = 2, param_4 != (undefined4 *)0x0)) &&
       (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x13c + uVar6 * 2);
    }
    break;
  case 0x14:
    uVar8 = 1;
    if ((param_4 != (undefined4 *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x11e);
    }
    break;
  case 0x15:
    if (((param_3 < *(byte *)(param_1 + 0x11e)) && (uVar8 = 2, param_4 != (undefined4 *)0x0)) &&
       (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x150 + uVar6 * 2);
    }
    break;
  case 0x16:
    uVar8 = 1;
    if ((param_4 != (undefined4 *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x11f);
    }
    break;
  case 0x17:
    if (((param_3 < *(byte *)(param_1 + 0x11f)) && (uVar8 = 2, param_4 != (undefined4 *)0x0)) &&
       (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x16c + uVar6 * 2);
    }
    break;
  case 0x18:
    uVar8 = 4;
    if ((param_4 != (undefined4 *)0x0) && (3 < param_5)) {
      *param_4 = *(undefined4 *)(param_1 + 0x180);
    }
    break;
  case 0x19:
    uVar8 = 4;
    if ((param_4 != (undefined4 *)0x0) && (3 < param_5)) {
      *param_4 = *(undefined4 *)(param_1 + 0x184);
    }
    break;
  case 0x1a:
    uVar8 = 1;
    if ((param_4 != (undefined4 *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 400);
    }
    break;
  case 0x1b:
    if (((param_3 < *(byte *)(param_1 + 400)) && (uVar8 = 2, param_4 != (undefined4 *)0x0)) &&
       (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x194 + uVar6 * 2);
    }
    break;
  case 0x1c:
    uVar8 = 1;
    if ((param_4 != (undefined4 *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x191);
    }
    break;
  case 0x1d:
    if (((param_3 < *(byte *)(param_1 + 0x191)) && (uVar8 = 2, param_4 != (undefined4 *)0x0)) &&
       (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x1ae + uVar6 * 2);
    }
    break;
  case 0x1e:
    uVar8 = 1;
    if ((param_4 != (undefined4 *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x192);
    }
    break;
  case 0x1f:
    uVar8 = 1;
    if ((param_4 != (undefined4 *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x193);
    }
    break;
  case 0x20:
    if (((param_3 < 2) && (uVar8 = 2, param_4 != (undefined4 *)0x0)) && (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x1d4 + uVar6 * 2);
    }
    break;
  case 0x21:
    uVar8 = 4;
    if ((param_4 != (undefined4 *)0x0) && (3 < param_5)) {
      *param_4 = *(undefined4 *)(param_1 + 0x118);
    }
    break;
  case 0x22:
    uVar8 = 4;
    if ((param_4 != (undefined4 *)0x0) && (3 < param_5)) {
      *param_4 = *(undefined4 *)(param_1 + 0x1d0);
    }
    break;
  case 0x23:
    uVar8 = 4;
    if ((param_4 != (undefined4 *)0x0) && (3 < param_5)) {
      *param_4 = *(undefined4 *)(param_1 + 0x1cc);
    }
    break;
  case 0x24:
    pcVar7 = *(char **)(param_1 + 0xd8);
    goto joined_r0x000180598ee4;
  case 0x25:
    pcVar7 = *(char **)(param_1 + 0xe0);
    goto joined_r0x000180598ee4;
  case 0x26:
    pcVar7 = *(char **)(param_1 + 0xe8);
    goto joined_r0x000180598ee4;
  case 0x27:
    pcVar7 = *(char **)(param_1 + 0xf0);
    goto joined_r0x000180598ee4;
  case 0x28:
    pcVar7 = *(char **)(param_1 + 0xf8);
joined_r0x000180598ee4:
    if (pcVar7 != (char *)0x0) {
LAB_18059890d:
      sVar4 = strlen(pcVar7);
      uVar8 = (int)sVar4 + 1;
      if ((param_4 != (undefined4 *)0x0) && (uVar8 <= param_5)) {
        FUN_18063aed0(param_4,pcVar7,uVar8);
      }
    }
    break;
  case 0x29:
    uVar8 = 1;
    if ((param_4 != (undefined4 *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x104);
    }
    break;
  case 0x2a:
    uVar8 = 2;
    if ((param_4 != (undefined4 *)0x0) && (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x106);
    }
    break;
  case 0x2b:
    uVar8 = 2;
    if ((param_4 != (undefined4 *)0x0) && (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x108);
    }
    break;
  case 0x2c:
    uVar8 = 2;
    if ((param_4 != (undefined4 *)0x0) && (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x110);
    }
    break;
  case 0x2d:
    uVar8 = 4;
    if ((param_4 != (undefined4 *)0x0) && (3 < param_5)) {
      *param_4 = *(undefined4 *)(param_1 + 0x100);
    }
  }
  if (uVar8 == 0) {
    uVar8 = 0xffffffff;
  }
  return uVar8;
}



